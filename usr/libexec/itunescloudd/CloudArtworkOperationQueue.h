//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class ICConnectionConfiguration;

@interface CloudArtworkOperationQueue : NSOperationQueue
{
    long long _sourceType;	// 8 = 0x8
    ICConnectionConfiguration *_configuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000353c8
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
- (_Bool)_hasValidUserIdentity:(id)arg1 forSourceType:(long long)arg2;	// IMP=0x00000001000351fc
- (id)_artworkURLForInfoDictionary:(id)arg1;	// IMP=0x0000000100034dc0
- (void)addOperations:(id)arg1;	// IMP=0x0000000100034a64
- (void)addOperation:(id)arg1;	// IMP=0x0000000100034990
- (id)initWithSourceType:(long long)arg1 configuration:(id)arg2;	// IMP=0x0000000100034900
- (id)initWithSourceType:(long long)arg1;	// IMP=0x00000001000347b8

@end

