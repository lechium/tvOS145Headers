//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class NSString;

@interface IDSCredentialLoader : NSObject <IDSServiceDelegate>
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSString *_uniqueID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000b4cc
@property(readonly, retain) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, retain) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)load;	// IMP=0x000000010000b4b0
- (id)initWithCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b2fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

