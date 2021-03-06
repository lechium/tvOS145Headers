//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface WhitelistChecker : NSObject
{
    NSSet *_blackListedPaths;	// 8 = 0x8
    NSDictionary *_domains;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100029158
@property(retain, nonatomic) NSDictionary *domains; // @synthesize domains=_domains;
@property(retain, nonatomic) NSSet *blackListedPaths; // @synthesize blackListedPaths=_blackListedPaths;
- (_Bool)handleSystemContainerFiles:(id)arg1 withMetadata:(id)arg2;	// IMP=0x0000000100028e24
- (_Bool)shouldRestoreSystemContainer_WatchAndTV:(id)arg1 shared:(_Bool)arg2;	// IMP=0x0000000100028d80
- (_Bool)shouldRestoreSystemContainer_iOS:(id)arg1 shared:(_Bool)arg2;	// IMP=0x0000000100028b78
- (_Bool)file:(id)arg1 blacklisted:(id)arg2;	// IMP=0x0000000100028960
- (_Bool)file:(id)arg1 whitelisted:(id)arg2;	// IMP=0x00000001000287e8
- (id)createFullPathList:(id)arg1 rootPath:(id)arg2 isAllowList:(_Bool)arg3;	// IMP=0x0000000100028538
- (_Bool)annotated:(id)arg1;	// IMP=0x00000001000283cc
- (_Bool)checkFile_WatchAndTV:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0000000100028240
- (_Bool)checkFile_iOS:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0000000100027bfc
- (_Bool)checkFile_macOS:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0000000100027b84
- (_Bool)checkManifest:(id)arg1;	// IMP=0x00000001000278b0
- (_Bool)load;	// IMP=0x0000000100027578

@end

