//
//  SSNCustomer.h
//  ShipStation
//
//  Created by Miguel Cazares on 8/24/15.
//  Copyright (c) 2015 ShipStation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Mantle/Mantle.h>

@interface MLPCustomer : MTLModel <MTLJSONSerializing>

@property (nonatomic) NSInteger customerID;
@property (nonatomic) NSInteger sellerID;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *company;
@property (nonatomic, strong) NSString *shipAddress1;
@property (nonatomic, strong) NSString *shipAddress2;
@property (nonatomic, strong) NSString *shipCity;
@property (nonatomic, strong) NSString *shipState;
@property (nonatomic, strong) NSString *shipPostalCode;
@property (nonatomic, strong) NSString *shipCountryCode;
@property (nonatomic, strong) NSString *shipPhone;
@property (nonatomic, strong) NSString *buyerEmail;

@end
