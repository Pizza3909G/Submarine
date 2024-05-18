add_rules("mode.debug", "mode.release")

add_requires("fmt")
add_requires("gsl")
add_requires("leveldb")

target("Submarine")
    add_cxflags(
        "/utf-8"
    )
    add_files(
        "src/math/**.cpp",
        "src/minecraft/**.cpp",
        "src/raklib/**.cpp"
    )
    add_headerfiles(
        "include/math/**.h",
        "include/math/**.hpp",
        "include/minecraft/**.h",
        "include/minecraft/**.hpp",
        "include/raklib/**.h",
        "include/raklib/**.hpp"
    )
    add_includedirs("include")
    add_packages(
        "fmt",
        "leveldb",
        { public = true }
    )
    set_kind("shared")
    set_languages("c++20")