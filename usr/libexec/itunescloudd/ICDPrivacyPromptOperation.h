//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class NSString;

@interface ICDPrivacyPromptOperation : ICAsyncOperation
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    _Bool _hasInvokedCompletionHandler;	// 24 = 0x18
    _Bool _wasCancelled;	// 25 = 0x19
    NSString *_privacyIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000c0be4
- (void)_didCompleteWithPrivacyPromptStatus:(long long)arg1 error:(id)arg2;	// IMP=0x00000001000c0900
- (void)execute;	// IMP=0x00000001000c0700
- (void)cancel;	// IMP=0x00000001000c06b0
@property(copy) CDUnknownBlockType completionHandler;
- (id)initWithPrivacyIdentifier:(id)arg1;	// IMP=0x00000001000c0538

@end

