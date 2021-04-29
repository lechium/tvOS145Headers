//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDAVRoute.h"

@class MRAVOutputDevice;

@interface MRDOutputDeviceRoute : MRDAVRoute
{
    MRAVOutputDevice *_outputDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000bb908
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x00000001000bb8e0
- (id)extendedInfo;	// IMP=0x00000001000bb874
- (id)dictionary;	// IMP=0x00000001000bb4fc
- (_Bool)canBeDefaultSystemRoute;	// IMP=0x00000001000bb4f4
- (_Bool)canBeDefaultRoute;	// IMP=0x00000001000bb4ec
- (_Bool)isSpeakerRoute;	// IMP=0x00000001000bb438
- (_Bool)isPicked;	// IMP=0x00000001000bb278
- (_Bool)isOutputRoute;	// IMP=0x00000001000bb270
- (_Bool)isInputRoute;	// IMP=0x00000001000bb268
- (id)modelName;	// IMP=0x00000001000bb250
- (id)type;	// IMP=0x00000001000bb1a8
- (id)name;	// IMP=0x00000001000bb190
- (id)MACAddress;	// IMP=0x00000001000bb178
- (id)uniqueIdentifier;	// IMP=0x00000001000bb160
- (id)description;	// IMP=0x00000001000bb0d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000bb034
- (unsigned long long)hash;	// IMP=0x00000001000bb01c
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x00000001000baf9c

@end
