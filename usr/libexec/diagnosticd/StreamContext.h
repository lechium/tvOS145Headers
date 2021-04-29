//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface StreamContext : NSObject
{
    unsigned int _streamFlags;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_readSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100004ad8
@property(nonatomic) unsigned int streamFlags; // @synthesize streamFlags=_streamFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *readSource; // @synthesize readSource=_readSource;
- (id)init;	// IMP=0x0000000100004a80

@end
