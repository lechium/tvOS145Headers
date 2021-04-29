/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface VSIdentityProviderStorefrontMetadata : NSObject {

	BOOL _isFeatured;
	NSString* _storefrontTwoCharCode;
	NSNumber* _sortOrdinal;

}

@property (nonatomic,retain) NSString * storefrontTwoCharCode;              //@synthesize storefrontTwoCharCode=_storefrontTwoCharCode - In the implementation block
@property (assign,nonatomic) BOOL isFeatured;                               //@synthesize isFeatured=_isFeatured - In the implementation block
@property (nonatomic,retain) NSNumber * sortOrdinal;                        //@synthesize sortOrdinal=_sortOrdinal - In the implementation block
-(NSString *)storefrontTwoCharCode;
-(void)setStorefrontTwoCharCode:(NSString *)arg1 ;
-(BOOL)isFeatured;
-(void)setIsFeatured:(BOOL)arg1 ;
-(NSNumber *)sortOrdinal;
-(void)setSortOrdinal:(NSNumber *)arg1 ;
@end

