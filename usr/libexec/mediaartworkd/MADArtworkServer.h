//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSVArtworkServiceInterface-Protocol.h"

@class NSOperationQueue, NSString;

@interface MADArtworkServer : NSObject <MSVArtworkServiceInterface>
{
    NSOperationQueue *_artworkServiceQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100002e18
@property(retain, nonatomic) NSOperationQueue *artworkServiceQueue; // @synthesize artworkServiceQueue=_artworkServiceQueue;
- (void)processArtworkRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100002b48
- (id)init;	// IMP=0x0000000100002a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

