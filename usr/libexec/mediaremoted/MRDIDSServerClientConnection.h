//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRIDSClientConnection.h>

@class MRAVLocalEndpoint, MRAVRoutingDiscoverySession;
@protocol MRDIDSServerClientConnectionDelegate;

@interface MRDIDSServerClientConnection : MRIDSClientConnection
{
    MRAVRoutingDiscoverySession *_audioDiscoverySession;	// 8 = 0x8
    MRAVRoutingDiscoverySession *_remoteControlDiscoverySession;	// 16 = 0x10
    MRAVLocalEndpoint *_localEndpoint;	// 24 = 0x18
    id _audioToken;	// 32 = 0x20
    id _remoteControlToken;	// 40 = 0x28
    id <MRDIDSServerClientConnectionDelegate> _discoveryDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100098a9c
@property(nonatomic) __weak id <MRDIDSServerClientConnectionDelegate> discoveryDelegate; // @synthesize discoveryDelegate=_discoveryDelegate;
- (id)combineEndpoints:(id)arg1 withOutputDevices:(id)arg2;	// IMP=0x00000001000987e0
- (id)mergeLocalEndpoint:(id)arg1 withOutputDevices:(id)arg2;	// IMP=0x00000001000986f0
- (id)_localizeEndpoint:(id)arg1;	// IMP=0x0000000100097f40
- (void)_handleRemoteControlEndpointsDidChange:(id)arg1;	// IMP=0x0000000100097ee4
- (void)_handleAudioOutputDevicesDidChange:(id)arg1;	// IMP=0x0000000100097e68
- (void)notifyEndpointsDidChange:(id)arg1 forFeature:(unsigned int)arg2;	// IMP=0x0000000100097d84
- (void)_handleEndpointDidChangeNotification:(id)arg1;	// IMP=0x0000000100097cc8
- (void)setDiscoveryMode:(unsigned int)arg1 forFeature:(unsigned int)arg2;	// IMP=0x0000000100097b74
- (void)dealloc;	// IMP=0x0000000100097aec
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;	// IMP=0x000000010009775c

@end
