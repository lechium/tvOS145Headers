//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIRemoteDataProtocol-Protocol.h"

@class NSString, TITextCheckerExemptions;

@interface TIRemoteDataHandle : NSObject <TIRemoteDataProtocol>
{
    TITextCheckerExemptions *_textCheckerExemptions;	// 8 = 0x8
}

+ (id)localizedStringForKey:(id)arg1;	// IMP=0x000000010000aa6c
+ (id)localDictionaryPath;	// IMP=0x000000010000a7f8
+ (_Bool)shouldAcceptRequestForMeCardWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x0000000100008fd8
- (void).cxx_destruct;	// IMP=0x000000010000ace0
- (void)performTrainingForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ac54
- (void)appendWordToTextCheckerLocalDictionary:(id)arg1;	// IMP=0x000000010000a930
- (void)requestTextCheckerLocalDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a85c
- (void)string:(id)arg1 isExemptFromTextCheckerWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a700
@property(readonly, nonatomic) TITextCheckerExemptions *textCheckerExemptions; // @synthesize textCheckerExemptions=_textCheckerExemptions;
- (void)removeAllDynamicDictionariesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a414
- (void)dismissedDataSharingWithResponse:(long long)arg1;	// IMP=0x000000010000a410
- (void)dismissDialogWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a290
- (id)notificationDetailsForType:(long long)arg1;	// IMP=0x0000000100009e64
- (void)presentDialogForType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009a30
- (void)launchDictationSettings;	// IMP=0x0000000100009a24
- (void)launchKeyboardSettings;	// IMP=0x00000001000098c4
- (void)requestMeContactWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009680
- (void)requestMeCardWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009364
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000092b4
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100009198
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000090d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

