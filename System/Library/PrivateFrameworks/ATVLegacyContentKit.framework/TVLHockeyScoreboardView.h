/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVColumnRowViewDataSource.h>
#import <libobjc.A.dylib/TVColumnRowViewDelegate.h>

@class UILabel, TVLColumnRowView, NSArray, NSString;

@interface TVLHockeyScoreboardView : UIView <TVColumnRowViewDataSource, TVColumnRowViewDelegate> {

	UILabel* _homeScoreboardLabel;
	UILabel* _awayScoreboardLabel;
	TVLColumnRowView* _scoreboardTableView;
	NSArray* _scoreboardHeaderTitles;
	NSArray* _scoreboardHomeRowValues;
	NSArray* _scoreboardAwayRowValues;

}

@property (nonatomic,retain) UILabel * homeScoreboardLabel;                       //@synthesize homeScoreboardLabel=_homeScoreboardLabel - In the implementation block
@property (nonatomic,retain) UILabel * awayScoreboardLabel;                       //@synthesize awayScoreboardLabel=_awayScoreboardLabel - In the implementation block
@property (nonatomic,retain) TVLColumnRowView * scoreboardTableView;              //@synthesize scoreboardTableView=_scoreboardTableView - In the implementation block
@property (nonatomic,retain) NSArray * scoreboardHeaderTitles;                    //@synthesize scoreboardHeaderTitles=_scoreboardHeaderTitles - In the implementation block
@property (nonatomic,retain) NSArray * scoreboardHomeRowValues;                   //@synthesize scoreboardHomeRowValues=_scoreboardHomeRowValues - In the implementation block
@property (nonatomic,retain) NSArray * scoreboardAwayRowValues;                   //@synthesize scoreboardAwayRowValues=_scoreboardAwayRowValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)defaultValueLabel;
-(id)defaultHeaderLabel;
-(long long)numberOfRowsInColumnRowView:(id)arg1 ;
-(long long)numberOfColumnsInColumnRowView:(id)arg1 ;
-(id)columnRowView:(id)arg1 headerForColumn:(long long)arg2 ;
-(id)columnRowView:(id)arg1 itemForRow:(long long)arg2 inColumn:(long long)arg3 ;
-(double)headerHeightForColumnRowView:(id)arg1 ;
-(double)columnRowView:(id)arg1 widthForColumn:(long long)arg2 ;
-(double)columnRowView:(id)arg1 heightForRow:(long long)arg2 ;
-(void)commontInit;
-(UILabel *)homeScoreboardLabel;
-(void)setHomeScoreboardLabel:(UILabel *)arg1 ;
-(UILabel *)awayScoreboardLabel;
-(void)setAwayScoreboardLabel:(UILabel *)arg1 ;
-(TVLColumnRowView *)scoreboardTableView;
-(void)setScoreboardTableView:(TVLColumnRowView *)arg1 ;
-(NSArray *)scoreboardHeaderTitles;
-(void)setScoreboardHeaderTitles:(NSArray *)arg1 ;
-(NSArray *)scoreboardHomeRowValues;
-(void)setScoreboardHomeRowValues:(NSArray *)arg1 ;
-(NSArray *)scoreboardAwayRowValues;
-(void)setScoreboardAwayRowValues:(NSArray *)arg1 ;
@end

