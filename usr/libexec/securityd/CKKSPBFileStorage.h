//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CKKSPBCodable;

__attribute__((visibility("hidden")))
@interface CKKSPBFileStorage : NSObject
{
    NSURL *_storageFile;	// 8 = 0x8
    Class _storageClass;	// 16 = 0x10
    id <CKKSPBCodable> _protobufStorage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010015f540
@property(retain) id <CKKSPBCodable> protobufStorage; // @synthesize protobufStorage=_protobufStorage;
@property(retain) Class storageClass; // @synthesize storageClass=_storageClass;
@property(retain) NSURL *storageFile; // @synthesize storageFile=_storageFile;
- (void)setStorage:(id)arg1;	// IMP=0x000000010015f3dc
- (id)storage;	// IMP=0x000000010015f370
- (id)initWithStoragePath:(id)arg1 storageClass:(Class)arg2;	// IMP=0x000000010015f1d4

@end

