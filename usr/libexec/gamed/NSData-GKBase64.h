//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (GKBase64)
+ (void)_gkLoadRemoteImageDataForORBForURL:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012f754
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 imageQueue:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010012e8ec
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010012e78c
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010012df9c
- (id)_gkBase64EncodedString;	// IMP=0x0000000100092670
- (id)initWithBase64EncodedString_gk:(id)arg1;	// IMP=0x0000000100092660
- (id)_gkMD5HashData;	// IMP=0x00000001000c007c
- (id)_gkSHA1HashData;	// IMP=0x00000001000bffd0
- (id)_gkMD5HashString;	// IMP=0x00000001000bff34
- (id)_gkSHA1HashString;	// IMP=0x00000001000bfe98
- (void)_gkWriteToImageCacheWithURLString:(id)arg1;	// IMP=0x000000010012db44
- (id)_gkUnzippedData;	// IMP=0x000000010012d9fc
- (id)_gkZippedData;	// IMP=0x000000010012d898
@end
