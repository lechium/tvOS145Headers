//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WiFiLOIManager : NSObject
{
    _Bool _deviceIsAssociated;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    double _bestLatitudeReading;	// 24 = 0x18
    double _bestLongitudeReading;	// 32 = 0x20
    double _accuracyOfBestReading;	// 40 = 0x28
}

+ (id)sharedWiFiLOIManager;	// IMP=0x0000000100005f78
@property _Bool deviceIsAssociated; // @synthesize deviceIsAssociated=_deviceIsAssociated;
@property(nonatomic) double accuracyOfBestReading; // @synthesize accuracyOfBestReading=_accuracyOfBestReading;
@property(nonatomic) double bestLongitudeReading; // @synthesize bestLongitudeReading=_bestLongitudeReading;
@property(nonatomic) double bestLatitudeReading; // @synthesize bestLatitudeReading=_bestLatitudeReading;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)ingestLocationUpdateWithLat:(double)arg1 andLon:(double)arg2 andAccuracy:(double)arg3;	// IMP=0x0000000100006c50
- (void)_locationUpdateNotificationHandler:(id)arg1;	// IMP=0x0000000100006c4c
- (int)query:(id)arg1 andMaximumDistanceInMeters:(double)arg2;	// IMP=0x00000001000064b4
- (void)asyncQueryLOITypeAtLatestLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006378
- (int)queryLOITypeAtLocationAndMaxDistance:(id)arg1 andMaximumDistanceInMeters:(double)arg2;	// IMP=0x00000001000062bc
- (int)queryLOITypeAtLastLocation;	// IMP=0x00000001000062b4
- (int)queryLOITypeAtLatestLocation;	// IMP=0x000000010000615c
- (void)dealloc;	// IMP=0x0000000100006110
- (id)init;	// IMP=0x0000000100006008

@end

