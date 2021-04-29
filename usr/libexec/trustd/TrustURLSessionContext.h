//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface TrustURLSessionContext : NSObject
{
    void *_context;	// 8 = 0x8
    NSArray *_URIs;	// 16 = 0x10
    unsigned long long _URIix;	// 24 = 0x18
    NSMutableData *_response;	// 32 = 0x20
    double _expiration;	// 40 = 0x28
    unsigned long long _numTasks;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010004e5f8
@property unsigned long long numTasks; // @synthesize numTasks=_numTasks;
@property double expiration; // @synthesize expiration=_expiration;
@property(retain) NSMutableData *response; // @synthesize response=_response;
@property unsigned long long URIix; // @synthesize URIix=_URIix;
@property(retain) NSArray *URIs; // @synthesize URIs=_URIs;
@property void *context; // @synthesize context=_context;
- (id)initWithContext:(void *)arg1 uris:(id)arg2;	// IMP=0x000000010004e4cc

@end

