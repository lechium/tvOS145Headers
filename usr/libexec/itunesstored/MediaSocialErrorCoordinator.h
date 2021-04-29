//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;
@protocol MediaSocialErrorDelegate, OS_dispatch_queue;

@interface MediaSocialErrorCoordinator : NSObject
{
    id <MediaSocialErrorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    id _notification;	// 24 = 0x18
    NSMutableOrderedSet *_postIDs;	// 32 = 0x20
    NSArray *_temporaryPostIDs;	// 40 = 0x28
    NSArray *_temporaryUploadIDs;	// 48 = 0x30
    NSMutableOrderedSet *_uploadIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100113a6c
@property(nonatomic) __weak id <MediaSocialErrorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showDialog:(id)arg1;	// IMP=0x000000010011389c
- (void)_sendDidFinishWithResponseFlags:(unsigned long long)arg1;	// IMP=0x00000001001137a8
- (id)_newErrorDialogWithServerMessageWithPost:(id)arg1 erroMessage:(id)arg2 canRetry:(_Bool)arg3;	// IMP=0x0000000100113300
- (id)_newSingleErrorDialogWithUpload:(id)arg1;	// IMP=0x0000000100112ef0
- (id)_newSingleErrorDialogWithPost:(id)arg1;	// IMP=0x0000000100112ae0
- (id)_newPluralErrorDialogWithUploadCount:(long long)arg1;	// IMP=0x0000000100112a20
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1 uploadCount:(long long)arg2;	// IMP=0x00000001001126b0
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1;	// IMP=0x00000001001125f0
- (id)_newPluralErrorDialogWithCount:(long long)arg1 formatString:(id)arg2;	// IMP=0x0000000100112320
@property(readonly, copy, nonatomic) NSArray *uploadIdentifiers;
@property(readonly, copy, nonatomic) NSArray *postIdentifiers;
- (void)dismissAllDialogs;	// IMP=0x0000000100112204
- (_Bool)addDialogForUploadIdentifiers:(id)arg1;	// IMP=0x00000001001120b0
- (_Bool)addDialogForUpload:(id)arg1;	// IMP=0x0000000100111f28
- (_Bool)addDialogForPost:(id)arg1 errorMessage:(id)arg2 canRetry:(_Bool)arg3;	// IMP=0x0000000100111e00
- (_Bool)addDialogForPost:(id)arg1;	// IMP=0x0000000100111c84
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x0000000100111c0c

@end

