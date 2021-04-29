/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PMMovieProviderDelegate;
@class VEKProduction, VEKResult, PMMovieProviderAnalyticsEvent;

@interface PMMovieProvider : NSObject {

	BOOL _isEditing;
	VEKProduction* _production;
	id<PMMovieProviderDelegate> _providerDelegate;
	VEKResult* _lastResult;
	PMMovieProviderAnalyticsEvent* _analyticsEvent;
	VEKProduction* _lastEditingProduction;
	unsigned long long _currentEditID;

}

@property (nonatomic,retain) VEKProduction * lastEditingProduction;                            //@synthesize lastEditingProduction=_lastEditingProduction - In the implementation block
@property (assign,nonatomic) unsigned long long currentEditID;                                 //@synthesize currentEditID=_currentEditID - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                                   //@synthesize isEditing=_isEditing - In the implementation block
@property (nonatomic,retain) VEKProduction * production;                                       //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMMovieProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,retain) VEKResult * lastResult;                                           //@synthesize lastResult=_lastResult - In the implementation block
@property (nonatomic,retain) PMMovieProviderAnalyticsEvent * analyticsEvent;                   //@synthesize analyticsEvent=_analyticsEvent - In the implementation block
+(unsigned long long)movieClipCountWithProduction:(id)arg1 result:(id)arg2 ;
-(BOOL)isEditing;
-(PMMovieProviderAnalyticsEvent *)analyticsEvent;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)setAnalyticsEvent:(PMMovieProviderAnalyticsEvent *)arg1 ;
-(void)setProviderDelegate:(id<PMMovieProviderDelegate>)arg1 ;
-(id<PMMovieProviderDelegate>)providerDelegate;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(void)setLastEditingProduction:(VEKProduction *)arg1 ;
-(unsigned long long)currentEditID;
-(void)setCurrentEditID:(unsigned long long)arg1 ;
-(VEKResult *)lastResult;
-(void)setLastResult:(VEKResult *)arg1 ;
-(id)initWithProduction:(id)arg1 ;
-(void)refreshPlayerItem;
-(void)cancelEdit;
-(VEKProduction *)lastEditingProduction;
@end

