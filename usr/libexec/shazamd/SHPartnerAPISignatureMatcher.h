//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SHMatcher-Protocol.h"

@class NSISO8601DateFormatter, NSString, SHNetworkRecognitionRequester, SHPartnerAPIStore;
@protocol SHMatcherDelegate;

__attribute__((visibility("hidden")))
@interface SHPartnerAPISignatureMatcher : NSObject <SHMatcher>
{
    id <SHMatcherDelegate> _delegate;	// 8 = 0x8
    NSISO8601DateFormatter *_iso8601Formatter;	// 16 = 0x10
    SHPartnerAPIStore *_store;	// 24 = 0x18
    SHNetworkRecognitionRequester *_networkRequester;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000073d8
@property(retain, nonatomic) SHNetworkRecognitionRequester *networkRequester; // @synthesize networkRequester=_networkRequester;
@property(retain, nonatomic) SHPartnerAPIStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (id)buildURLForSignature:(id)arg1 endpoint:(id)arg2;	// IMP=0x00000001000072d4
- (id)partnerURLRequestForSignature:(id)arg1 endpoint:(id)arg2 apiKey:(id)arg3;	// IMP=0x0000000100006ccc
- (void)matchSignature:(id)arg1 tokenizedEndpoint:(id)arg2 apiKey:(id)arg3;	// IMP=0x0000000100006858
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0000000100006560
- (void)responseForServerData:(id)arg1 signature:(id)arg2;	// IMP=0x0000000100006464
@property(readonly, nonatomic) NSISO8601DateFormatter *iso8601Formatter; // @synthesize iso8601Formatter=_iso8601Formatter;
- (id)initWithStore:(id)arg1 recognitionRequester:(id)arg2;	// IMP=0x0000000100006368
- (id)initWithStore:(id)arg1;	// IMP=0x00000001000062f4
- (void)dealloc;	// IMP=0x00000001000062a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

