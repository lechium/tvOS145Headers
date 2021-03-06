/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, AMSLookup;

@interface IMContentLookupService : NSObject {

	NSString* _profile;
	NSString* _artworkType;
	NSArray* _ids;
	long long _version;
	AMSLookup* _amsLookup;

}

@property (nonatomic,retain) AMSLookup * amsLookup;               //@synthesize amsLookup=_amsLookup - In the implementation block
@property (nonatomic,retain) NSString * profile;                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * artworkType;              //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,retain) NSArray * ids;                       //@synthesize ids=_ids - In the implementation block
@property (assign,nonatomic) long long version;                   //@synthesize version=_version - In the implementation block
-(id)init;
-(long long)version;
-(NSArray *)ids;
-(void)setVersion:(long long)arg1 ;
-(void)request:(/*^block*/id)arg1 ;
-(NSString *)profile;
-(NSString *)artworkType;
-(void)setArtworkType:(NSString *)arg1 ;
-(void)setProfile:(NSString *)arg1 ;
-(void)setIds:(NSArray *)arg1 ;
-(void)setAmsLookup:(AMSLookup *)arg1 ;
-(id)initWithIds:(id)arg1 ;
-(void)_configureRequest;
-(AMSLookup *)amsLookup;
@end

