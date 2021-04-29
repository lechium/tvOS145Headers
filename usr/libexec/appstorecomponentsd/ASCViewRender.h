//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCSignpostGroup-Protocol.h"

@class NSString;

@interface ASCViewRender : NSObject <ASCSignpostGroup>
{
}

+ (void)pageUserReadyWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013ee8
+ (void)resourceRequestDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013e38
+ (void)resourceRequestDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013d88
+ (void)rootViewModelPresentWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013cd8
+ (void)rootViewModelParseDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013c28
+ (void)rootViewModelParseDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013b78
+ (void)jsCallDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013ac8
+ (void)jsCallDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013a18
+ (void)requestDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013968
+ (void)requestDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x00000001000138b8
+ (void)launchCorrelationKeyWithTag:(unsigned long long)arg1 withString:(id)arg2;	// IMP=0x00000001000137b0
+ (void)bootstrapDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013700
+ (void)bootstrapDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013650
+ (void)pageRequestedWithTag:(unsigned long long)arg1;	// IMP=0x00000001000135a0
+ (void)modelPrefetchDidEndWithTag:(unsigned long long)arg1;	// IMP=0x00000001000134f0
+ (void)modelPrefetchDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013440
+ (void)overlayRequestedWithTag:(unsigned long long)arg1;	// IMP=0x0000000100013390
+ (id)requiredFieldNames;	// IMP=0x0000000100013310
+ (void)willEmitSignpostOfType:(long long)arg1 withName:(id)arg2;	// IMP=0x000000010001330c
+ (id)log;	// IMP=0x00000001000131e4
+ (id)category;	// IMP=0x00000001000131d8
+ (id)subsystem;	// IMP=0x00000001000131cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
