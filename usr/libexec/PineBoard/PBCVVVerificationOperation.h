//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "PBTextEntryViewControllerDelegate-Protocol.h"

@class NSString, NSURL;

@interface PBCVVVerificationOperation : ISOperation <PBTextEntryViewControllerDelegate>
{
    CDUnknownBlockType _completion;	// 96 = 0x60
    NSString *_customerTitle;	// 104 = 0x68
    NSString *_customerMessage;	// 112 = 0x70
    NSURL *_verifyURL;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010018d0e8
@property(retain, nonatomic) NSURL *verifyURL; // @synthesize verifyURL=_verifyURL;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x000000010018ce68
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x000000010018cd24
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010018c8d0
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010018c480
- (id)_copyResponseWithCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000010018c060
- (_Bool)_verifyCVVCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000010018b860
- (id)_copyCVVCodeFromUser;	// IMP=0x000000010018b55c
- (void)run;	// IMP=0x000000010018b2f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
