//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDGetSerialNumbersResult : NSObject
{
    NSArray *_serialNumbers;	// 8 = 0x8
    NSString *_lastUpdatedTag;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010019b31c
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(retain, nonatomic) NSArray *serialNumbers; // @synthesize serialNumbers=_serialNumbers;

@end

