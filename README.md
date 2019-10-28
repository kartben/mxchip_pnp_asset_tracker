A variation on https://docs.microsoft.com/en-us/samples/azure-samples/mxchip-iot-devkit-pnp/sample that adds an interface for reporting (fake) location data.

The location is reported over a PnP interface (`urn:contoso:position:1`) whose detailed definition can be queried from the server as it is exposed thanks to the `urn:azureiot:ModelDiscovery:ModelDefinition` interface.

Simulated location telemetry consists of ~320 different points tracing a route from Seattle, WA to Redmond, WA.