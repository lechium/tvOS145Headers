/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNAvatarViewController_Private.h>
#import <libobjc.A.dylib/CNAvatarViewController.h>
@class NSArray;


@protocol CNAvatarViewController <NSObject,CNUIObjectViewController>
@property (nonatomic,copy) NSArray * contacts; 
@required
-(id)initWithSettings:(id)arg1;
-(NSArray *)contacts;
-(void)setContacts:(id)arg1;
-(id)descriptorForRequiredKeys;

@end


@protocol CNUIObjectViewControllerDelegate;
@class CNContactStore, PRPersonaStore, NSArray, NSString, UIView;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController> {

	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

}

@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * contacts; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
+(Class)defaultImplementation;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)descriptorForRequiredKeys;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
@end

