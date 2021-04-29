/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCMouseEventData : NSObject <NSSecureCoding> {

	unsigned short _source;
	unsigned _type;
	float _deltaX;
	float _deltaY;
	unsigned long long _buttonMask;
	unsigned long long _senderID;

}

@property (assign) unsigned type;                              //@synthesize type=_type - In the implementation block
@property (assign) unsigned short source;                      //@synthesize source=_source - In the implementation block
@property (assign) float deltaX;                               //@synthesize deltaX=_deltaX - In the implementation block
@property (assign) float deltaY;                               //@synthesize deltaY=_deltaY - In the implementation block
@property (assign) unsigned long long buttonMask;              //@synthesize buttonMask=_buttonMask - In the implementation block
@property (assign) unsigned long long senderID;                //@synthesize senderID=_senderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(void)setType:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)type;
-(unsigned short)source;
-(void)setSource:(unsigned short)arg1 ;
-(unsigned long long)senderID;
-(void)setSenderID:(unsigned long long)arg1 ;
-(float)deltaX;
-(float)deltaY;
-(void)setDeltaX:(float)arg1 ;
-(void)setDeltaY:(float)arg1 ;
-(unsigned long long)buttonMask;
-(void)setButtonMask:(unsigned long long)arg1 ;
@end

