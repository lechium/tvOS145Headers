//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface CloudGeniusUtilities : NSObject
{
    NSDictionary *_ml3TrackPropertyToGeniusTrackPropertyMap;	// 8 = 0x8
    NSDictionary *_ml3TrackPropertyTransformMap;	// 16 = 0x10
    NSDictionary *_ml3ContainerPropertyToGeniusPlaylistPropertyMap;	// 24 = 0x18
    NSDictionary *_ml3ContainerPropertyTransformMap;	// 32 = 0x20
    NSArray *_allML3TrackPropertiesWithGeniusTrackProperties;	// 40 = 0x28
    NSArray *_allGeniusTrackPropertiesWithML3TrackProperties;	// 48 = 0x30
    NSArray *_allML3ContainerPropertiesWithGeniusPlaylistProperties;	// 56 = 0x38
    NSArray *_allGeniusPlaylistPropertiesWithML3ContainerProperties;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100074378
@property(retain, nonatomic) NSArray *allGeniusPlaylistPropertiesWithML3ContainerProperties; // @synthesize allGeniusPlaylistPropertiesWithML3ContainerProperties=_allGeniusPlaylistPropertiesWithML3ContainerProperties;
@property(retain, nonatomic) NSArray *allML3ContainerPropertiesWithGeniusPlaylistProperties; // @synthesize allML3ContainerPropertiesWithGeniusPlaylistProperties=_allML3ContainerPropertiesWithGeniusPlaylistProperties;
@property(retain, nonatomic) NSArray *allGeniusTrackPropertiesWithML3TrackProperties; // @synthesize allGeniusTrackPropertiesWithML3TrackProperties=_allGeniusTrackPropertiesWithML3TrackProperties;
@property(retain, nonatomic) NSArray *allML3TrackPropertiesWithGeniusTrackProperties; // @synthesize allML3TrackPropertiesWithGeniusTrackProperties=_allML3TrackPropertiesWithGeniusTrackProperties;
- (void)_initializeMappings;	// IMP=0x0000000100073154
- (id)geniusValueForML3ContainerProperty:(id)arg1 value:(id)arg2;	// IMP=0x00000001000730c4
- (id)geniusPlaylistPropertyForML3ContainerProperty:(id)arg1;	// IMP=0x00000001000730b4
- (id)geniusValueForML3TrackProperty:(id)arg1 value:(id)arg2;	// IMP=0x0000000100073024
- (id)geniusTrackPropertyForML3TrackProperty:(id)arg1;	// IMP=0x0000000100073014
- (id)init;	// IMP=0x0000000100072fbc

@end
