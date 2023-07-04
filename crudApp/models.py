from django.db import models

# Create your models here.


class Student(models.Model):
    name = models.CharField(max_length=50)
    age = models.IntegerField()
    address = models.CharField(null=True, max_length=100)

    def __str__(self):
        return self.name


class Branch(models.Model):
    pass
