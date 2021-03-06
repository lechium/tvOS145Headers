/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSArray;

@interface FAInviteContext : NSObject {

	BOOL _canEditRecipients;
	NSString* _title;
	NSString* _subtitle;
	NSString* _action;
	NSString* _secondaryTitle;
	NSURL* _imageURL;
	NSURL* _iconURL;
	NSURL* _inviteURL;
	NSString* _overlaidTextColorString;
	NSArray* _invitees;
	NSString* _mailLinkTitle;
	NSString* _mailLinkSubtitle;
	NSString* _mailMessageSubject;
	NSString* _mailMessageBodyHTML;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                       //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                                 //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) NSURL * inviteURL;                               //@synthesize inviteURL=_inviteURL - In the implementation block
@property (nonatomic,copy) NSString * overlaidTextColorString;              //@synthesize overlaidTextColorString=_overlaidTextColorString - In the implementation block
@property (nonatomic,copy) NSArray * invitees;                              //@synthesize invitees=_invitees - In the implementation block
@property (assign,nonatomic) BOOL canEditRecipients;                        //@synthesize canEditRecipients=_canEditRecipients - In the implementation block
@property (nonatomic,copy) NSString * mailLinkTitle;                        //@synthesize mailLinkTitle=_mailLinkTitle - In the implementation block
@property (nonatomic,copy) NSString * mailLinkSubtitle;                     //@synthesize mailLinkSubtitle=_mailLinkSubtitle - In the implementation block
@property (nonatomic,copy) NSString * mailMessageSubject;                   //@synthesize mailMessageSubject=_mailMessageSubject - In the implementation block
@property (nonatomic,copy) NSString * mailMessageBodyHTML;                  //@synthesize mailMessageBodyHTML=_mailMessageBodyHTML - In the implementation block
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSURL *)iconURL;
-(NSURL *)imageURL;
-(void)setIconURL:(NSURL *)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(NSString *)secondaryTitle;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(void)_parseResultsDictionary:(id)arg1 ;
-(NSURL *)inviteURL;
-(NSArray *)invitees;
-(BOOL)canEditRecipients;
-(void)setInviteURL:(NSURL *)arg1 ;
-(NSString *)overlaidTextColorString;
-(void)setOverlaidTextColorString:(NSString *)arg1 ;
-(void)setInvitees:(NSArray *)arg1 ;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(NSString *)mailLinkTitle;
-(void)setMailLinkTitle:(NSString *)arg1 ;
-(NSString *)mailLinkSubtitle;
-(void)setMailLinkSubtitle:(NSString *)arg1 ;
-(NSString *)mailMessageSubject;
-(void)setMailMessageSubject:(NSString *)arg1 ;
-(NSString *)mailMessageBodyHTML;
-(void)setMailMessageBodyHTML:(NSString *)arg1 ;
@end

