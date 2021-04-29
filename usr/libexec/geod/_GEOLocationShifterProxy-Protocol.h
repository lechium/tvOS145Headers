//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOApplicationAuditToken, GEOLatLng, NSCache, NSObject;
@protocol OS_dispatch_queue;

@protocol _GEOLocationShifterProxy <NSObject>
@property(readonly, nonatomic) NSCache *memoryCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)flushDiskCache;
- (void)shiftLatLng:(GEOLatLng *)arg1 auditToken:(GEOApplicationAuditToken *)arg2 completionHandler:(void (^)(GEOLocationShiftFunctionResponse *, NSError *))arg3;
- (unsigned int)locationShiftFunctionVersion;
- (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (_Bool)isLocationShiftEnabled;
@end
