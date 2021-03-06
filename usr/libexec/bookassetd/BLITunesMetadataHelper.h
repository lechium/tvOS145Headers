//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BLITunesMetadataHelper : NSObject
{
    NSDictionary *_plist;	// 8 = 0x8
}

+ (id)familyAccountIdentifierWithSinfsArray:(id)arg1 epubRightsInfo:(id)arg2;	// IMP=0x000000010001fc58
+ (id)downloaderAccountIdentifierWithSinfsArray:(id)arg1 epubRightsInfo:(id)arg2;	// IMP=0x000000010001fbe0
+ (id)purchaserAccountIdentifierWithSinfsArray:(id)arg1 epubRightsInfo:(id)arg2;	// IMP=0x000000010001fb68
+ (id)epubRightsInfoWithEpubRightsData:(id)arg1;	// IMP=0x000000010001fa0c
+ (id)_itunesMetadataDictionaryWithMetadata:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x000000010001f2d4
- (void).cxx_destruct;	// IMP=0x000000010001fce4
@property(retain, nonatomic) NSDictionary *plist; // @synthesize plist=_plist;
- (id)writePlistWithDownloadID:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001ef9c
- (id)initWithClientIdentifier:(id)arg1 downloadMetadata:(id)arg2;	// IMP=0x000000010001eed8

@end

