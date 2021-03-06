/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSURL, PXTimelineCrop;

@interface PXTimelineEntry : NSObject <NSCopying> {

	unsigned long long _contentType;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _title;
	NSString* _subtitle;
	NSString* _localIdentifier;
	NSString* _assetLocalIdentifier;
	NSURL* _deeplink;
	PXTimelineCrop* _suggestedCrop;
	NSString* _proactiveCriterion;
	double _relevanceScore;
	unsigned long long _rejectReason;

}

@property (nonatomic,retain) NSDate * startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double relevanceScore;                        //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (nonatomic,retain) PXTimelineCrop * suggestedCrop;                 //@synthesize suggestedCrop=_suggestedCrop - In the implementation block
@property (assign,nonatomic) unsigned long long rejectReason;                //@synthesize rejectReason=_rejectReason - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;               //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;                   //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * assetLocalIdentifier;              //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * deeplink;                             //@synthesize deeplink=_deeplink - In the implementation block
@property (nonatomic,retain) NSString * proactiveCriterion;                  //@synthesize proactiveCriterion=_proactiveCriterion - In the implementation block
+(id)_descriptionForRejectReason:(unsigned long long)arg1 ;
+(id)_descriptionForTimelineContentType:(unsigned long long)arg1 ;
+(id)emptyWidgetURL;
+(id)placeholderEntry;
+(id)fallbackEntryForSize:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)title;
-(unsigned long long)contentType;
-(NSString *)subtitle;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(double)relevanceScore;
-(NSString *)localIdentifier;
-(NSString *)assetLocalIdentifier;
-(PXTimelineCrop *)suggestedCrop;
-(void)setSuggestedCrop:(PXTimelineCrop *)arg1 ;
-(id)initWithMemory:(id)arg1 andMemoryKeyAsset:(id)arg2 ;
-(id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2 ;
-(id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2 suggestedCrop:(id)arg3 ;
-(id)_initWithTitle:(id)arg1 subtitle:(id)arg2 localIdentifier:(id)arg3 assetLocalIdentifier:(id)arg4 deeplink:(id)arg5 contentType:(unsigned long long)arg6 relevanceScore:(double)arg7 proactiveCriterion:(id)arg8 suggestedCrop:(id)arg9 rejectReason:(unsigned long long)arg10 ;
-(id)_initWithTimelineEntry:(id)arg1 ;
-(NSURL *)deeplink;
-(NSString *)proactiveCriterion;
-(void)setProactiveCriterion:(NSString *)arg1 ;
-(unsigned long long)rejectReason;
-(void)setRejectReason:(unsigned long long)arg1 ;
@end

