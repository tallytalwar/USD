//
// Copyright 2023 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#include "pxr/imaging/hd/materialNetworkSchema.h"

#include "pxr/imaging/hd/retainedDataSource.h"

#include "pxr/base/trace/trace.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdMaterialNetworkSchemaTokens,
    HD_MATERIAL_NETWORK_SCHEMA_TOKENS);

// --(BEGIN CUSTOM CODE: Schema Methods)--
// --(END CUSTOM CODE: Schema Methods)--

HdMaterialNodeContainerSchema
HdMaterialNetworkSchema::GetNodes() const
{
    return HdMaterialNodeContainerSchema(_GetTypedDataSource<HdContainerDataSource>(
        HdMaterialNetworkSchemaTokens->nodes));
}

HdMaterialConnectionContainerSchema
HdMaterialNetworkSchema::GetTerminals() const
{
    return HdMaterialConnectionContainerSchema(_GetTypedDataSource<HdContainerDataSource>(
        HdMaterialNetworkSchemaTokens->terminals));
}

HdMaterialInterfaceMappingsContainerSchema
HdMaterialNetworkSchema::GetInterfaceMappings() const
{
    return HdMaterialInterfaceMappingsContainerSchema(_GetTypedDataSource<HdContainerDataSource>(
        HdMaterialNetworkSchemaTokens->interfaceMappings));
}

HdSampledDataSourceContainerSchema
HdMaterialNetworkSchema::GetConfig() const
{
    return HdSampledDataSourceContainerSchema(_GetTypedDataSource<HdContainerDataSource>(
        HdMaterialNetworkSchemaTokens->config));
}

/*static*/
HdContainerDataSourceHandle
HdMaterialNetworkSchema::BuildRetained(
        const HdContainerDataSourceHandle &nodes,
        const HdContainerDataSourceHandle &terminals,
        const HdContainerDataSourceHandle &interfaceMappings,
        const HdContainerDataSourceHandle &config
)
{
    TfToken _names[4];
    HdDataSourceBaseHandle _values[4];

    size_t _count = 0;

    if (nodes) {
        _names[_count] = HdMaterialNetworkSchemaTokens->nodes;
        _values[_count++] = nodes;
    }

    if (terminals) {
        _names[_count] = HdMaterialNetworkSchemaTokens->terminals;
        _values[_count++] = terminals;
    }

    if (interfaceMappings) {
        _names[_count] = HdMaterialNetworkSchemaTokens->interfaceMappings;
        _values[_count++] = interfaceMappings;
    }

    if (config) {
        _names[_count] = HdMaterialNetworkSchemaTokens->config;
        _values[_count++] = config;
    }
    return HdRetainedContainerDataSource::New(_count, _names, _values);
}

HdMaterialNetworkSchema::Builder &
HdMaterialNetworkSchema::Builder::SetNodes(
    const HdContainerDataSourceHandle &nodes)
{
    _nodes = nodes;
    return *this;
}

HdMaterialNetworkSchema::Builder &
HdMaterialNetworkSchema::Builder::SetTerminals(
    const HdContainerDataSourceHandle &terminals)
{
    _terminals = terminals;
    return *this;
}

HdMaterialNetworkSchema::Builder &
HdMaterialNetworkSchema::Builder::SetInterfaceMappings(
    const HdContainerDataSourceHandle &interfaceMappings)
{
    _interfaceMappings = interfaceMappings;
    return *this;
}

HdMaterialNetworkSchema::Builder &
HdMaterialNetworkSchema::Builder::SetConfig(
    const HdContainerDataSourceHandle &config)
{
    _config = config;
    return *this;
}

HdContainerDataSourceHandle
HdMaterialNetworkSchema::Builder::Build()
{
    return HdMaterialNetworkSchema::BuildRetained(
        _nodes,
        _terminals,
        _interfaceMappings,
        _config
    );
} 

PXR_NAMESPACE_CLOSE_SCOPE