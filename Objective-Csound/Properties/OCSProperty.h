//
//  OCSProperty.h
//
//  Created by Adam Boulanger on 6/15/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSParamConstant.h"
#import "BaseValueCacheable.h"

@interface OCSProperty : BaseValueCacheable
{
    Float32 maximumValue;
    Float32 minimumValue;
    Float32 initValue;
    Float32 value;
    
    OCSParamControl *control;
    OCSParamConstant *constant;
    OCSParamControl *output;

    //channelName
    float* channelPtr;
}

@property (nonatomic, readwrite) Float32 value;
@property (nonatomic, assign) Float32 maximumValue;
@property (nonatomic, assign) Float32 minimumValue;
@property (nonatomic, assign) Float32 initValue;
@property (nonatomic, strong) OCSParamControl *control;
@property (nonatomic, strong) OCSParamConstant *constant;
@property (nonatomic, strong) OCSParam *output;

- (id)initWithValue:(float)aInitValue;
- (id)initWithValue:(float)val Min:(float)min Max:(float)max;
- (NSString *)getChannelText;
- (NSString *)setChannelText;
- (NSString *)uniqueName;

- (void)setup:(CsoundObj*)csoundObj;
- (void)updateValuesToCsound;

@end
