/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSDate;

@interface SSRVoiceProfileMetaContext : NSObject {

	NSString* _appDomain;
	NSString* _profileId;
	NSString* _languageCode;
	NSString* _productCategory;
	NSNumber* _version;
	NSDate* _dateAdded;
	NSNumber* _pitch;
	NSString* _sharedSiriId;
	NSString* _homeId;
	NSString* _userName;

}

@property (nonatomic,retain) NSString * appDomain;                    //@synthesize appDomain=_appDomain - In the implementation block
@property (nonatomic,retain) NSString * profileId;                    //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                 //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSString * productCategory;              //@synthesize productCategory=_productCategory - In the implementation block
@property (nonatomic,retain) NSNumber * version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDate * dateAdded;                      //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,retain) NSNumber * pitch;                        //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,retain) NSString * sharedSiriId;                 //@synthesize sharedSiriId=_sharedSiriId - In the implementation block
@property (nonatomic,retain) NSString * homeId;                       //@synthesize homeId=_homeId - In the implementation block
@property (nonatomic,retain) NSString * userName;                     //@synthesize userName=_userName - In the implementation block
-(id)description;
-(NSString *)languageCode;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSString *)userName;
-(NSNumber *)pitch;
-(void)setPitch:(NSNumber *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSDate *)dateAdded;
-(void)setDateAdded:(NSDate *)arg1 ;
-(NSString *)homeId;
-(void)setHomeId:(NSString *)arg1 ;
-(NSString *)appDomain;
-(NSString *)productCategory;
-(void)setProductCategory:(NSString *)arg1 ;
-(NSString *)profileId;
-(NSString *)sharedSiriId;
-(void)setProfileId:(NSString *)arg1 ;
-(id)initWithVoiceProfile:(id)arg1 ;
-(id)initWithSharedSiriId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4 ;
-(void)setAppDomain:(NSString *)arg1 ;
-(void)setSharedSiriId:(NSString *)arg1 ;
@end

