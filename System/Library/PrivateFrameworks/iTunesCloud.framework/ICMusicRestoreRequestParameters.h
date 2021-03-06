/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface ICMusicRestoreRequestParameters : NSObject {

	NSNumber* _adamID;
	NSNumber* _accountID;
	NSNumber* _matchStatus;
	NSString* _title;
	NSString* _storeFrontID;
	NSString* _mediaKind;
	NSString* _flavor;

}

@property (nonatomic,copy,readonly) NSNumber * adamID;                    //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * accountID;                 //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * matchStatus;               //@synthesize matchStatus=_matchStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeFrontID;              //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaKind;                 //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * flavor;                    //@synthesize flavor=_flavor - In the implementation block
-(NSString *)title;
-(NSNumber *)accountID;
-(NSNumber *)adamID;
-(NSString *)flavor;
-(NSString *)storeFrontID;
-(NSString *)mediaKind;
-(NSNumber *)matchStatus;
-(id)initWithItemID:(id)arg1 title:(id)arg2 storeFrontID:(id)arg3 mediaKind:(id)arg4 accountID:(id)arg5 matchStatus:(id)arg6 flavor:(id)arg7 ;
@end

