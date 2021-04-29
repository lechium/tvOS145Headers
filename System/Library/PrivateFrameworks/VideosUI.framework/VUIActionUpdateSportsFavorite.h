/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAction.h>

@class IKViewElement, NSString;

@interface VUIActionUpdateSportsFavorite : VUIAction {

	IKViewElement* _viewElement;
	NSString* _sportsLeagueID;
	NSString* _sportsTeamName;

}

@property (assign,nonatomic,__weak) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy) NSString * sportsLeagueID;                         //@synthesize sportsLeagueID=_sportsLeagueID - In the implementation block
@property (nonatomic,copy) NSString * sportsTeamName;                         //@synthesize sportsTeamName=_sportsTeamName - In the implementation block
+(void)performFavoritesOperation:(BOOL)arg1 teamId:(id)arg2 teamName:(id)arg3 requestExecutionHandler:(/*^block*/id)arg4 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 viewElement:(id)arg2 ;
-(NSString *)sportsLeagueID;
-(void)setSportsLeagueID:(NSString *)arg1 ;
-(NSString *)sportsTeamName;
-(void)setSportsTeamName:(NSString *)arg1 ;
@end

