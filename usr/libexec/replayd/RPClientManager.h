//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RPClientManager : NSObject
{
    NSMutableDictionary *_bundleIDToClientDictionary;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010001b6a0
- (void).cxx_destruct;	// IMP=0x000000010001c120
@property(retain, nonatomic) NSMutableDictionary *bundleIDToClientDictionary; // @synthesize bundleIDToClientDictionary=_bundleIDToClientDictionary;
- (void)stopAllClientsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001baf8
- (id)getClientWithBundleID:(id)arg1;	// IMP=0x000000010001bae8
- (void)removeClient:(id)arg1;	// IMP=0x000000010001b980
- (void)addClient:(id)arg1;	// IMP=0x000000010001b910
- (void)dealloc;	// IMP=0x000000010001b820
- (id)init;	// IMP=0x000000010001b70c

@end

