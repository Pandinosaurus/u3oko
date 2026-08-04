#pragma once
/**
\file       iloader-impl.hpp
\author     Erashov Anton erashov2026@proton.me
\date       20.10.2016
*/

namespace libs::iproperties::xml
{
/// Интерфейс, который должна предоставлять реализация от ОС для загрузки содержимого файлов настройки read-only в память
class ILoaderImpl
{
  public:
  // ext types
  U3_ADD_POINTERS_TO_SELF (ILoaderImpl)

  virtual ~ILoaderImpl () = default;

  bool is_exist_file (const std::string&, const appl_paths::Paths&) const;
  bool is_exist_folder (const std::string&, const appl_paths::Paths&) const;
  bool get (const std::string&, const appl_paths::Paths&, syn::IBlockMem::ptr&);
  void get_enum (const appl_paths::Paths&, syn::NodeEnumFiles&, const std::string&);

  protected:
  ILoaderImpl () = default;

  private:
  //  ILoaderImpl interface
  virtual bool is_exist_file_int (const std::string&, const appl_paths::Paths&) const           = 0;
  virtual bool is_exist_folder_int (const std::string&, const appl_paths::Paths&) const         = 0;
  virtual bool get_int (const std::string&, const appl_paths::Paths&, syn::IBlockMem::ptr&)     = 0;
  virtual void get_enum_int (const appl_paths::Paths&, syn::NodeEnumFiles&, const std::string&) = 0;
};
}   // namespace libs::iproperties::xml
