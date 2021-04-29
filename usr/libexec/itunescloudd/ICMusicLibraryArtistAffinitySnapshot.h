//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICMusicLibraryContentMetadataDescriptor, NSDate, NSMutableArray, NSMutableSet, NSString;

@interface ICMusicLibraryArtistAffinitySnapshot : NSObject
{
    NSDate *_lastPlayedDate;	// 8 = 0x8
    long long _cumulativePlayCount;	// 16 = 0x10
    long long _cumulativeSkipCount;	// 24 = 0x18
    NSMutableArray *_uniqueSongs;	// 32 = 0x20
    NSMutableArray *_uniqueAlbums;	// 40 = 0x28
    NSMutableSet *_uniqueDatesWithAddedContent;	// 48 = 0x30
    ICMusicLibraryContentMetadataDescriptor *_artistMetadataDescriptor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010005356c
@property(retain, nonatomic) ICMusicLibraryContentMetadataDescriptor *artistMetadataDescriptor; // @synthesize artistMetadataDescriptor=_artistMetadataDescriptor;
@property(retain, nonatomic) NSMutableSet *uniqueDatesWithAddedContent; // @synthesize uniqueDatesWithAddedContent=_uniqueDatesWithAddedContent;
@property(retain, nonatomic) NSMutableArray *uniqueAlbums; // @synthesize uniqueAlbums=_uniqueAlbums;
@property(retain, nonatomic) NSMutableArray *uniqueSongs; // @synthesize uniqueSongs=_uniqueSongs;
@property(nonatomic) long long cumulativeSkipCount; // @synthesize cumulativeSkipCount=_cumulativeSkipCount;
@property(nonatomic) long long cumulativePlayCount; // @synthesize cumulativePlayCount=_cumulativePlayCount;
@property(copy, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
- (id)debugDescription;	// IMP=0x0000000100053320
- (float)legacyScore;	// IMP=0x000000010005322c
@property(readonly, nonatomic) long long daysSinceLastPlayedDate;
@property(readonly, nonatomic) double averagePlaysPerItemAdded;
@property(readonly, nonatomic) long long artistAdamID;
@property(readonly, copy, nonatomic) NSString *artistName;
- (id)initWithContentItemSnapshot:(id)arg1;	// IMP=0x0000000100052f20

@end

