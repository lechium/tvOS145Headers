//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLCloudKitErrors : NSObject
{
}

+ (_Bool)isOperationCancelledOrDeferredError:(id)arg1;	// IMP=0x00000001000d5974
+ (_Bool)isCloudKitOperationCancelledError:(id)arg1;	// IMP=0x00000001000d5818
+ (_Bool)isFeatureDisabledError:(id)arg1;	// IMP=0x00000001000d5678
+ (_Bool)isRecordNotFoundError:(id)arg1;	// IMP=0x00000001000d55e4
+ (id)realErrorForError:(id)arg1;	// IMP=0x00000001000d53a4
+ (id)errorsPerZoneIDForPartialFailureError:(id)arg1;	// IMP=0x00000001000d5334
+ (id)errorsPerRecordIDForPartialFailureError:(id)arg1;	// IMP=0x00000001000d52c4
+ (id)_filteredPartialFailureError:(id)arg1 itemClass:(Class)arg2;	// IMP=0x00000001000d4efc
+ (_Bool)isPartialFailureError:(id)arg1;	// IMP=0x00000001000d4e68
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeIdentifiers:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4 arguments:(char *)arg5;	// IMP=0x00000001000d42b0
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeIdentifiers:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4;	// IMP=0x00000001000d4278
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3 arguments:(char *)arg4;	// IMP=0x00000001000d425c
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3;	// IMP=0x00000001000d4218
+ (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x00000001000d4208
+ (id)_bestErrorForUnderlyingError:(id)arg1 scopeIdentifiers:(id)arg2;	// IMP=0x00000001000d3a00
+ (id)_rejectionReasonFromPartialError:(id)arg1 identifier:(id)arg2;	// IMP=0x00000001000d3778
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x00000001000d3500
+ (_Bool)_isCKErrorForRejectedRecord:(id)arg1;	// IMP=0x00000001000d33d8

@end

