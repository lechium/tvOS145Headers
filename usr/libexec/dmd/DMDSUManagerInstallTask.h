//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMDSUManagerInstallTask : NSObject
{
}

+ (id)productKeyOrDefaultFromStatus:(id)arg1;	// IMP=0x00000001000623bc
+ (id)productKeyFromStatus:(id)arg1;	// IMP=0x0000000100062324
+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x0000000100062240
+ (id)defaultProductKey;	// IMP=0x0000000100062234
+ (id)sharedInstallTask;	// IMP=0x00000001000621c8
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x0000000100062448
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x0000000100062440
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x0000000100062438
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100062430
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x0000000100062428

@end

