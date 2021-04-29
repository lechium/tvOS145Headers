//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class GKNetworkRequestManager, NSString;

@interface GKNetworkRequestManagerSessionDelegate : NSObject <NSURLSessionDownloadDelegate>
{
    GKNetworkRequestManager *_networkManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010023ca70
@property(readonly, nonatomic) __weak GKNetworkRequestManager *networkManager; // @synthesize networkManager=_networkManager;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000010023c578
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010023b1e4
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x000000010023b01c
- (id)initWithNetworkManager:(id)arg1;	// IMP=0x000000010023afb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

