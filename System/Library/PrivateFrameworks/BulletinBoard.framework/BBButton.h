/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBImage, BBAction, NSData;

@interface BBButton : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	BBImage* _image;
	BBAction* _action;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) BBImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) BBAction * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * glyphData; 
+(BOOL)supportsSecureCoding;
+(id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3 ;
+(id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4 ;
+(id)buttonWithTitle:(id)arg1 action:(id)arg2 ;
+(id)buttonWithTitle:(id)arg1 glyphData:(id)arg2 action:(id)arg3 identifier:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BBAction *)action;
-(void)setAction:(BBAction *)arg1 ;
-(BBImage *)image;
-(void)setImage:(BBImage *)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4 ;
-(NSData *)glyphData;
@end
