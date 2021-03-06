//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class NSNumber, PBOpenApplicationRequest;

@interface PBOpenAppDialogsTransaction : BSTransaction
{
    PBOpenApplicationRequest *_request;	// 8 = 0x8
    NSNumber *_restrictionValue;	// 16 = 0x10
    NSNumber *_legacyGameValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001c2378
@property(readonly, nonatomic) NSNumber *legacyGameValue; // @synthesize legacyGameValue=_legacyGameValue;
@property(readonly, nonatomic) NSNumber *restrictionValue; // @synthesize restrictionValue=_restrictionValue;
@property(readonly, nonatomic) PBOpenApplicationRequest *request; // @synthesize request=_request;
- (void)_addLegacyGameDialogTransaction;	// IMP=0x00000001001c1fc4
- (void)_addRestrictionDialogTransaction;	// IMP=0x00000001001c1c48
@property(readonly, nonatomic) _Bool shouldContinueLaunch;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;	// IMP=0x00000001001c1b7c
- (void)_begin;	// IMP=0x00000001001c1b24
- (id)initWithRequest:(id)arg1;	// IMP=0x00000001001c1a48

@end

