/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICStoreArtworkSizeInfo, NSURL, NSArray, NSDictionary, NSString;

@interface ICStoreArtworkInfo : NSObject <NSCopying, NSSecureCoding> {

	ICStoreArtworkSizeInfo* _sizeInfo;
	NSURL* _artworkURL;
	NSArray* _sortedResponseArray;
	NSArray* _sortedSupportedSizesArray;
	NSArray* _responseArray;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy) NSArray * sortedResponseArray;                           //@synthesize sortedResponseArray=_sortedResponseArray - In the implementation block
@property (nonatomic,copy) NSArray * sortedSupportedSizesArray;                     //@synthesize sortedSupportedSizesArray=_sortedSupportedSizesArray - In the implementation block
@property (nonatomic,copy,readonly) NSURL * artworkURL;                             //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * responseArray;                        //@synthesize responseArray=_responseArray - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) ICStoreArtworkSizeInfo * sizeInfo;                   //@synthesize sizeInfo=_sizeInfo - In the implementation block
@property (nonatomic,readonly) CGSize originalSize; 
@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringRepresentation;
-(NSURL *)artworkURL;
-(CGSize)originalSize;
-(NSDictionary *)responseDictionary;
-(ICStoreArtworkSizeInfo *)sizeInfo;
-(id)artworkURLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 preferP3ColorSpace:(BOOL)arg4 ;
-(id)initWithArtworkResponseDictionary:(id)arg1 ;
-(id)artworkURLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(id)initWithArtworkResponseArray:(id)arg1 ;
-(id)initWithArtworkURL:(id)arg1 ;
-(id)initWithArtworkResponseValue:(id)arg1 ;
-(CGColorRef)copyColorWithKind:(id)arg1 ;
-(void)_sortResponseArray;
-(void)_sortSupportedSizesArray;
-(BOOL)_hasOriginalSize;
-(NSArray *)sortedResponseArray;
-(void)setSortedResponseArray:(NSArray *)arg1 ;
-(NSArray *)sortedSupportedSizesArray;
-(void)setSortedSupportedSizesArray:(NSArray *)arg1 ;
-(NSArray *)responseArray;
@end

