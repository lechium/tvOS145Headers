//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface StoreItemSubGenre : NSObject <NSCopying>
{
    NSString *_genre;	// 8 = 0x8
    NSNumber *_genreID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100113c18
@property(readonly) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(readonly) NSString *genre; // @synthesize genre=_genre;
- (void)_parseDictionary:(id)arg1;	// IMP=0x0000000100113b6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100113ad4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100113a60

@end
