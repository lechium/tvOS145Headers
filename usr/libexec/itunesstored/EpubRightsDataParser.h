//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSData, NSMutableString, NSString;

@interface EpubRightsDataParser : NSObject <NSXMLParserDelegate>
{
    NSData *_sinfData;	// 8 = 0x8
    NSMutableString *_buffer;	// 16 = 0x10
    _Bool _isSinfElement;	// 24 = 0x18
}

@property(readonly, nonatomic) NSData *sinfData; // @synthesize sinfData=_sinfData;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x00000001000c1624
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x00000001000c15cc
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x00000001000c1594
- (void)dealloc;	// IMP=0x00000001000c1544
- (id)initWithXMLData:(id)arg1;	// IMP=0x00000001000c14b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
