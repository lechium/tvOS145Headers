//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface MSDManifest : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
    NSString *_rootPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100031adc
@property(retain) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (id)createManifestForCurrentUser:(id)arg1;	// IMP=0x0000000100031878
@property(readonly, getter=pathSet) NSSet *pathSet;
- (_Bool)enumerateAndCollectMetaData:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3 superSet:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100030b6c
- (_Bool)path:(id)arg1 inSuperSet:(id)arg2;	// IMP=0x00000001000309c0
- (_Bool)addFilesFromPath:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3 superSet:(id)arg4;	// IMP=0x000000010003093c
- (_Bool)addFilesFromPath:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3;	// IMP=0x000000010003092c
- (_Bool)folder:(id)arg1 contains:(id)arg2;	// IMP=0x0000000100030718
- (void)setMetadata:(id)arg1 forFile:(id)arg2;	// IMP=0x00000001000306a0
- (id)metadataForFile:(id)arg1;	// IMP=0x0000000100030618
- (void)dealloc;	// IMP=0x00000001000305c0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000304c4
- (id)init;	// IMP=0x0000000100030444

@end

