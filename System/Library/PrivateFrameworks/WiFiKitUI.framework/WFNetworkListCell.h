/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFNetworkCell.h>

@class NSString, WFHotspotDetails, UIImageView, UILabel, UIStackView, NSLayoutConstraint, WFAssociationStateView;

@interface WFNetworkListCell : UITableViewCell <WFNetworkCell> {

	BOOL _secure;
	BOOL _personalHotspot;
	BOOL _connectionError;
	unsigned long long _bars;
	NSString* _title;
	NSString* _subtitle;
	UIImageView* _signalImageView;
	UIImageView* _lockImageView;
	UILabel* _nameLabel;
	UILabel* _subtitleLabel;
	UIStackView* _stackView;
	NSLayoutConstraint* _stackViewTopConstraint;
	NSLayoutConstraint* _stackViewBottomConstraint;
	WFAssociationStateView* _associationStateView;
	NSLayoutConstraint* _signalImageViewCenterConstraint;

}

@property (assign,nonatomic,__weak) UIImageView * signalImageView;                                     //@synthesize signalImageView=_signalImageView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * lockImageView;                                       //@synthesize lockImageView=_lockImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * nameLabel;                                               //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * subtitleLabel;                                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIStackView * stackView;                                           //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewTopConstraint;                       //@synthesize stackViewTopConstraint=_stackViewTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewBottomConstraint;                    //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) WFAssociationStateView * associationStateView;                     //@synthesize associationStateView=_associationStateView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * signalImageViewCenterConstraint;              //@synthesize signalImageViewCenterConstraint=_signalImageViewCenterConstraint - In the implementation block
@property (nonatomic,copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL secure;                                                              //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) unsigned long long bars;                                                  //@synthesize bars=_bars - In the implementation block
@property (assign,nonatomic) BOOL personalHotspot;                                                     //@synthesize personalHotspot=_personalHotspot - In the implementation block
@property (nonatomic,retain) WFHotspotDetails * hotspotDetails; 
@property (assign,nonatomic) BOOL connectionError;                                                     //@synthesize connectionError=_connectionError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setState:(long long)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)secure;
-(unsigned long long)bars;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setBars:(unsigned long long)arg1 ;
-(BOOL)connectionError;
-(void)setConnectionError:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setPersonalHotspot:(BOOL)arg1 ;
-(void)setHotspotDetails:(WFHotspotDetails *)arg1 ;
-(UIImageView *)lockImageView;
-(UIImageView *)signalImageView;
-(id)imageFromSignalBars:(unsigned long long)arg1 ;
-(void)_adjustStackViewPadding;
-(double)_verticalPadding;
-(NSLayoutConstraint *)stackViewTopConstraint;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(WFAssociationStateView *)associationStateView;
-(void)_updateSignalImage;
-(BOOL)personalHotspot;
-(NSLayoutConstraint *)signalImageViewCenterConstraint;
-(void)setSignalImageView:(UIImageView *)arg1 ;
-(void)setLockImageView:(UIImageView *)arg1 ;
-(void)setStackViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAssociationStateView:(WFAssociationStateView *)arg1 ;
-(void)setSignalImageViewCenterConstraint:(NSLayoutConstraint *)arg1 ;
@end

