Import("env")

global_env = DefaultEnvironment()

for e in (env, global_env):
    try:
        # key may or may not exist
        e['CXXFLAGS'].remove("-fno-rtti")
    except:
        pass
    e['CXXFLAGS'].append("-frtti")