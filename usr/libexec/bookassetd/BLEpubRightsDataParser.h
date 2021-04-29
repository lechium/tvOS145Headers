//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSData, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface BLEpubRightsDataParser : NSObject <NSXMLParserDelegate>
{
    _Bool _isSinfElement;	// 8 = 0x8
    NSData *_sinfData;	// 16 = 0x10
    NSMutableString *_buffer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000107f0
@property(nonatomic) _Bool isSinfElement; // @synthesize isSinfElement=_isSinfElement;
@property(retain, nonatomic) NSMutableString *buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) NSData *sinfData; // @synthesize sinfData=_sinfData;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x000000010001076c
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x00000001000106e0
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x00000001000106a8
- (id)initWithXMLData:(id)arg1;	// IMP=0x00000001000105f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
