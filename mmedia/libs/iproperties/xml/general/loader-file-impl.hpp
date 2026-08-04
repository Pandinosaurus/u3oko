#pragma once
/**
\file       loader-file-impl.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.01.2017
*/

namespace libs::iproperties::xml::general
{
/// Общая реализация загрузчика неизменяемых файлов из комлпекта поставки системы
/// спользуется по умолчанию (win32/linux)
class LoaderFileImpl final : public ILoaderImpl
{
  public:
  explicit LoaderFileImpl (InitLoaderInfo info);
  virtual ~LoaderFileImpl () = default;

  private:
  //  ILoaderImpl overrides
  virtual bool is_exist_file_int (const std::string&, const appl_paths::Paths&) const override;
  virtual bool is_exist_folder_int (const std::string&, const appl_paths::Paths&) const override;
  virtual void get_enum_int (const appl_paths::Paths&, syn::NodeEnumFiles&, const std::string&) override;
  virtual bool get_int (const std::string&, const appl_paths::Paths&, syn::IBlockMem::ptr&) override;

  InitLoaderInfo     iinfo_;   //< нформация, переданная при создании экзепляра
  syn::NodeEnumFiles enums_;   //< Список файлов и директорий
};
}   // namespace libs::iproperties::xml::general
